extern int fn_82817B08(void *obj);

typedef struct Data_827FE6F8 {
    char pad[0x38];
    void *a;
    void *b;
    void *c;
    void *d;
} Data_827FE6F8;

int fn_827FE6F8(Data_827FE6F8 **self)
{
    int total = fn_82817B08((*self)->a);
    total += fn_82817B08((*self)->b);
    total += fn_82817B08((*self)->c);
    return total + fn_82817B08((*self)->d);
}
