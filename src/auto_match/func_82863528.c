typedef struct State_82863528 {
    char pad[0x90];
    char *data;
    unsigned int count;
} State_82863528;

extern State_82863528 *fn_8285A808(void);
extern void fn_82863790(unsigned int *);
extern void fn_82861F50(unsigned int, void *);
extern void fn_82863400(void *, void *, unsigned int, void *, float *);
extern int fn_827EAAF0(void *, void *, float, unsigned char *);
extern int fn_827EB678(void *, void *, void *, unsigned char *);

unsigned char fn_82863528(void)
{
    unsigned char flag;
    float amount;
    unsigned int handle[2];
    char temp[16];
    char buffer[176];
    int result;
    State_82863528 *self = fn_8285A808();
    fn_82863790(handle);
    fn_82861F50(handle[0], buffer);
    flag = 0;
    if (self->count != 0) {
        fn_82863400(self->data + 4, self->data + 16, self->count, temp, &amount);
        result = fn_827EAAF0(buffer, temp, amount, &flag);
    } else {
        result = fn_827EB678(buffer, self->data + 4, self->data + 16, &flag);
    }
    return result != 0;
}
