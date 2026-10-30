struct Entry { int unused; int value; int other; };
struct Container { Entry *data; int size; int pad[2]; int count; };
extern "C" void fn_82CF13E8(Container *container) {
    int i = 0;
    container->count = 0;
    if (container->size <= 0) return;
    do {
        Entry *entry = container->data + i;
        ++i;
        entry->value = 0;
    } while (i < container->size);
}
