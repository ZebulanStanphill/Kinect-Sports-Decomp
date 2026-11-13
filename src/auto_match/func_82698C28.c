typedef struct Obj_82698C28 {
    int pad[5];
    int value;
} Obj_82698C28;

int fn_82698C28(Obj_82698C28 **self, int value)
{
    return (*self)->value < value;
}
