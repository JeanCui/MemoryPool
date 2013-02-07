
void * JC::ByteMemoryPool::alloc( size_t size )
{
	size_t space = listOfMemoryChunks->spaceAvailable();
	if(space<size)
		expandStorage(size);
	return listOfMemoryChunks->alloc(size);
}

void JC::ByteMemoryPool::free( void *i_ptr )
{
	listOfMemoryChunks->free(i_ptr);
}