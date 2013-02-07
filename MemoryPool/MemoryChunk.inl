
void * JC::MemoryChunk::alloc( size_t size )
{
	void *addr = static_cast<void*>( static_cast<char*>(mem) + bytesAlreadyAllocated);
	bytesAlreadyAllocated += size;

	return addr;
}

// 
void JC::MemoryChunk::free( void *i_ptr)
{

}