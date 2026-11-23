// Prints one timer node: name, call count and share of the total, then the eight timer values.
#include "havok/hkBase.h"
#include "havok/hkOstream.h"

struct TimerNode_82CF01E0 {
    float m_value[8];          /* 0x00 */
    unsigned short m_count[8]; /* 0x20 */
    char pad30[0x1c];
    const char *m_name; /* 0x4C */
};

extern "C" void fn_82CF01E0(hkOstream &os, float total, TimerNode_82CF01E0 *node)
{
    char buf[256];
    int maxCount = 0;
    int i;

    for (i = 0; i < 8; i++) {
        if (node->m_count[i] != 0 && node->m_count[i] > maxCount) {
            maxCount = node->m_count[i];
        }
    }
    if (total > 0.0f) {
        hkString::snprintf(buf, 200, "%s (%i) %4.1f%%", node->m_name, maxCount,
                           node->m_value[1] / total * 100.0f);
    } else {
        hkString::snprintf(buf, 200, "%s (%i)", node->m_name, maxCount);
    }
    os.printf("%-34s%s", buf, "\t\t\t");
    for (i = 0; i < 8; i++) {
        if (node->m_count[i] != 0) {
            os.printf("% 12.3f: ", node->m_value[i]);
        }
    }
    os.printf("\n");
}
