/* Writes one float to a stream: fn_82CFDFE0(stream, data, element size, element count). */
extern int fn_82CFDFE0(void *stream, const void *data, unsigned int size, unsigned int count);

void fn_82CFE4D8(void *stream, float value)
{
    fn_82CFDFE0(stream, &value, sizeof(value), 1);
}
