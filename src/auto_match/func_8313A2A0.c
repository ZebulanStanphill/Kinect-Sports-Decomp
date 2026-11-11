/* atexit destructor of the global object lbl_83299074 (constructed in fn_82230C88): restores the
   base vtable lbl_82196410 and destroys the set at 0x124 (fn_82231B60), like the deleting
   destructor fn_82230BB8 without the free. */
typedef struct Global_8313A2A0 {
    void *vtable;
    int pad[0x48];
    int set[8];
} Global_8313A2A0;

extern char lbl_82196410[];
extern Global_8313A2A0 lbl_83299074;
extern void fn_82231B60(void *set);

void fn_8313A2A0(void)
{
    lbl_83299074.vtable = lbl_82196410;
    fn_82231B60(lbl_83299074.set);
}
