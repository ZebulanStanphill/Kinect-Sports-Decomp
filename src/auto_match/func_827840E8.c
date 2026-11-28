#include <math.h>

typedef struct Point_827840E8 {
    float x;
    float y;
} Point_827840E8;

typedef struct Span_827840E8 {
    int kind;
    unsigned int count;
    unsigned int first;
    char pad[0xc];
} Span_827840E8;

typedef struct Path_827840E8 {
    char pad00[0x14];
    Point_827840E8 **pointPages;
    unsigned int count;
    char pad1c[8];
    Span_827840E8 **spanPages;
} Path_827840E8;

static __forceinline Point_827840E8 *PointAt(Path_827840E8 *path, unsigned int index)
{
    return &path->pointPages[index >> 8][index & 255];
}

void fn_827840E8(Path_827840E8 *path, float tolerance)
{
    unsigned int i;

    for (i = 0; i < path->count; ++i) {
        Span_827840E8 *span = &path->spanPages[i >> 6][i & 63];
        if (span->count > 2) {
            unsigned int first = span->first;
            unsigned int last = span->count - 1;
            unsigned int j;
            Point_827840E8 previous = *PointAt(path, first);
            Point_827840E8 end;
            Point_827840E8 *beforeEnd;

            for (j = 1; j < last; ++j) {
                Point_827840E8 *point = PointAt(path, first + j);
                float deltaX = point->x - previous.x;
                float deltaY = point->y - previous.y;
                float distance = fabsf(deltaX);
                distance += fabsf(deltaY);
                if (!(distance < tolerance))
                    previous = *point;
                else
                    *point = previous;
            }

            end = *PointAt(path, first + last);
            beforeEnd = PointAt(path, first + last - 1);
            {
                float deltaX = beforeEnd->x - end.x;
                float deltaY = beforeEnd->y - end.y;
                float distance = fabsf(deltaX);
                distance += fabsf(deltaY);
                if (distance < tolerance)
                    *beforeEnd = end;
            }
        }
    }
}
