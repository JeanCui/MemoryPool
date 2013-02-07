#ifndef C_MEMORYCHUNK_H
#define C_MEMORYCHUNK_H
namespace JC
{
	class MemoryChunk{
		MemoryChunk *next;
		void *mem;

		size_t chunkSize;
		size_t bytesAlreadyAllocated;
	public:
		MemoryChunk(MemoryChunk *nextChunk,size_t chunksize);
		~MemoryChunk(){delete mem;}

		inline void *alloc(size_t size);
		inline void free(void *i_ptr);

		MemoryChunk *nextMemChunk(){return next;}

		size_t spaceAvailable(){return chunkSize - bytesAlreadyAllocated;}
		enum{DEFAULT_CHUNK_SIZE = 4096};
	}; // MemoryChunk
}
#include "MemoryChunk.inl"
#endif // JC namespace