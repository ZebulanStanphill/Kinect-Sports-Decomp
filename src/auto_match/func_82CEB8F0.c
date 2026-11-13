typedef struct Info_82CEB8F0 { char pad[8]; unsigned short size; } Info_82CEB8F0;
typedef struct Self_82CEB8F0 { void *type; int pad[3]; char data[0x40]; } Self_82CEB8F0;

extern Info_82CEB8F0 *fn_82CFD4F0(void *type);
extern void fn_82CFC050(void *dst, const void *src, int size);

int fn_82CEB8F0(Self_82CEB8F0 *self, const void *src, void *type)
{
    Info_82CEB8F0 *info = fn_82CFD4F0(type);
    if (info->size <= 0x40) {
        self->type = type;
        fn_82CFC050(self->data, src, (short)info->size);
        return 0;
    }
    return 1;
}
