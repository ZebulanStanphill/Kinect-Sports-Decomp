struct Entry { int kind; void *value; };
struct Unit_825A4ED0 { Entry *data; unsigned int size;  };
extern "C" void *fn_825A4ED0(Unit_825A4ED0 *object){ for (unsigned int i = 0; i < object->size; ++i) if (object->data[i].kind == 1) return object->data[i].value; return 0; }
