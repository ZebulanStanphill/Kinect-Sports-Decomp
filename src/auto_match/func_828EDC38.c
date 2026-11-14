/* Is the 8-byte id all zero? */
int memcmp(const void *a, const void *b, unsigned int n);

typedef struct {
    unsigned char bytes[8];
} Id_828EDC38;

unsigned char fn_828EDC38(const Id_828EDC38 *id)
{
    Id_828EDC38 zero = {0};
    return memcmp(&zero, id, sizeof(Id_828EDC38)) == 0;
}
