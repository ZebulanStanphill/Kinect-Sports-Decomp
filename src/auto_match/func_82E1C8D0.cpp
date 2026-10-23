// This 16-byte function stores the vtable lbl_8214B728 (0x8214B728): an inline constructor or destructor
// of an abstract class without RTTI (deleting destructor fn_82E1C978 with the global operator delete, six
// _purecall slots, then fn_82E1C8E0).
extern "C" {
extern void *lbl_8214B728[];   // vtable, 8 slots
}

extern "C" void fn_82E1C8D0(void **self)
{
    *self = lbl_8214B728;
}
