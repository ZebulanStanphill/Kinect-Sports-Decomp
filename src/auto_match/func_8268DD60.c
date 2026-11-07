typedef struct Stats_8268DD60 {
    unsigned int allocated;
    unsigned int used;
    unsigned int allocCount;
} Stats_8268DD60;

typedef struct Entry_8268DD60 {
    int type;
    const char *name;
    unsigned int value;
} Entry_8268DD60;

void fn_8268DD60(Stats_8268DD60 *stats, Entry_8268DD60 *out, unsigned int index)
{
    const char *name;
    unsigned int value;

    switch (index) {
    case 0:
        value = stats->allocated;
        name = "Allocated";
        break;
    case 1:
        value = stats->used;
        name = "Used";
        break;
    case 2:
        value = stats->allocCount;
        name = "AllocCount";
        break;
    default:
        return;
    }
    out->name = name;
    out->value = value;
    out->type = 1;
}
