struct Elem { virtual void f0(); virtual void f4(); char pad[0x38]; };
struct Owner { char pad[0x30]; Elem *arr; Elem *Get(int i); };
Elem *Owner::Get(int i)
{
    Elem *e = &arr[i];
    e->f4();
    return e;
}
