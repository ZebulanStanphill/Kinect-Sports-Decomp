typedef struct Owner_824EC288 {
    char reserved[0x14];
    void *values;
} Owner_824EC288;

extern void fn_82837D98(void *, unsigned int, void **);
extern void fn_824EBB80(float, float, float, float, float, void *, float, void *, int, int);

void fn_824EC288(float x, float y, float z, float width, float height, Owner_824EC288 *owner, float scale,
                 void *context, int first, int second)
{
    void *value;
    fn_82837D98(owner->values, 0, &value);
    fn_824EBB80(x, y, z, width, height, value, scale, context, first, second);
}
