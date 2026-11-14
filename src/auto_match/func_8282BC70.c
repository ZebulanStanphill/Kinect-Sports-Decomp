extern int fn_8282BA08(void *self, void *buffer, int offset, unsigned int size, unsigned int stride, unsigned int count);

int fn_8282BC70(void *self, void *buffer, unsigned int bytes, unsigned int size)
{
    return fn_8282BA08(self, buffer, 0, size, size, bytes / size);
}
