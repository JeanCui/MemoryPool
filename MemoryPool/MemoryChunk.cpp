#include "MemoryChunk.h"

JC::MemoryChunk::MemoryChunk( MemoryChunk *nextChunk,size_t reqsize )
{
	chunkSize = reqsize > DEFAULT_CHUNK_SIZE ? reqsize:DEFAULT_CHUNK_SIZE;
	next = nextChunk;
	bytesAlreadyAllocated = 0;
	mem = new char[chunkSize];
}
