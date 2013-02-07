#include "ByteMemoryPool.h"

JC::ByteMemoryPool::ByteMemoryPool( size_t initSize /*= MemoryChunk::DEFAULT_CHUNK_SIZE*/ )
{
	listOfMemoryChunks = 0;
	expandStorage(initSize);
}

void JC::ByteMemoryPool::expandStorage( size_t reqSize )
{
	listOfMemoryChunks = new MemoryChunk(listOfMemoryChunks,reqSize);
}

JC::ByteMemoryPool::~ByteMemoryPool()
{
	MemoryChunk *memChunk = listOfMemoryChunks;
	while(memChunk){
		listOfMemoryChunks = memChunk->nextMemChunk();
		delete memChunk;
		memChunk = listOfMemoryChunks;
	}
}