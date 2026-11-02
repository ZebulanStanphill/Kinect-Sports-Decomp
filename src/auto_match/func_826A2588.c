extern void fn_826A1B38(int p);
extern void fn_826A1B88(int p);
extern void fn_826A1BD8(int p);
extern void fn_826A1C28(int p);
extern void fn_826A1C78(int p);

void fn_826A2588(int p, unsigned int k)
{
    switch (k) {
    case 0: fn_826A1B38(p); break;
    case 1: fn_826A1B88(p); break;
    case 2: fn_826A1BD8(p); break;
    case 3: fn_826A1C28(p); break;
    case 4: fn_826A1C78(p); break;
    }
}
