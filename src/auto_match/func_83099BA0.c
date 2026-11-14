typedef struct Info_83099BA0 {
    char pad0[0x14];
    int count;
} Info_83099BA0;

typedef struct Object_83099BA0 {
    char pad0[0x18];
    Info_83099BA0 *info;
} Object_83099BA0;

void fn_83099BA0(unsigned char *result, Object_83099BA0 *self)
{
    *result = self->info->count > 0;
}
