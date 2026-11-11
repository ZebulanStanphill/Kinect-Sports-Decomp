typedef struct Args_8262D0A0 {
    char pad[0xc];
    float value;
    int flag;
} Args_8262D0A0;

extern void fn_82624348(void *self, float *value, int flag);

void fn_8262D0A0(void *self, Args_8262D0A0 *args)
{
    fn_82624348(self, &args->value, args->flag);
}
