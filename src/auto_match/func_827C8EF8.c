long long jpeg_mem_available(int cinfo, unsigned long long min_bytes_needed,
                      unsigned long long max_bytes_needed, long long already_allocated)
{
    return (unsigned long long)*(unsigned int *)(*(int *)(cinfo + 4) + 0x2c)
           - already_allocated;
}
