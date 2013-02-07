#ifndef C_MEMORYPOOL_H
#define C_MEMORYPOOL_H
#include "MemoryChunk.h"
namespace JC
{
	class ByteMemoryPool{
		MemoryChunk *listOfMemoryChunks;
	public:
		ByteMemoryPool(size_t initSize = MemoryChunk::DEFAULT_CHUNK_SIZE);
		~ByteMemoryPool();

		inline void *alloc(size_t size);
		inline void free(void *i_ptr);
	private:
		void expandStorage(size_t reqSize);

	};
}
#include "ByteMemoryPool.inl"
#endif