/* Writes one 16-bit value to a stream: fn_82CFDFE0(stream, data, element size, element count). */
extern int fn_82CFDFE0(void *stream, const void *data, unsigned int size, unsigned int count);

void fn_82CFE3B8(void *stream, short value)
{
    fn_82CFDFE0(stream, &value, sizeof(value), 1);
}
