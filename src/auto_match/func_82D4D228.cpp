struct D { int pad[8]; char *data; };
struct Unit_82D4D228 {
    int pad[3];
    unsigned *data;
    int n;


};
extern "C" void fn_82D4D228(Unit_82D4D228 *object,D *q){
    int i = 0;
    if (object->n <= 0) return;
    do {
        unsigned *values=object->data; unsigned v = values[i];
        ++i;
        q->data[v >> 8] = (char)v;
    } while (i < object->n);
}
