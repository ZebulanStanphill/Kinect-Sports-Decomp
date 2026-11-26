// Writes the header line of the monitor statistics table (Common/Base/Monitor/
// MonitorStreamAnalyzer): "Timer Name", one padded column per thread and SPU,
// the averages, into a string built by an hkOstream over an hkArray<char>,
// then hands it to the output stream and prints the nodes (fn_82CF1C18).
#include "havok/hkBase.h"

#include "havok/hkOstream.h"

struct StatsOptions {
    int m_firstColumn;        // +0x0
    int m_columnWidth;        // +0x4
    int m_unknown8;           // +0x8
    int m_unknownC;           // +0xC
    hkUint8 m_unknown10;      // +0x10
};

extern "C" {
int fn_82CF0DC8(void *nodes, int depth, int a, hkUint8 b);
void fn_82CF1C18(hkOstream *os, void *nodes, int depth, int numThreads, int numSpus, StatsOptions *options);
}

static HK_FORCE_INLINE void padTo(hkOstream *os, hkArray<char> &buf, StatsOptions *options, int column)
{
    int pad = options->m_columnWidth * column - buf.getSize() + options->m_firstColumn;
    for (int i = 0; i < pad; i++)
        *os << ' ';
}

extern "C" void fn_82CF2010(void *nodes, int numThreads, int numSpus, hkOstream *outStream, StatsOptions *options)
{
    options->m_firstColumn = fn_82CF0DC8(nodes, 0, options->m_unknown8, options->m_unknown10);
    hkArray<char> buf;
    hkOstream os(buf);
    os.printf("Timer Name");
    if (numThreads > 1 || numSpus > 0) {
        for (int i = 0; i < numThreads; i++) {
            padTo(&os, buf, options, i);
            os.printf("Thread %d", i);
        }
        for (int i = 0; i < numSpus; i++) {
            padTo(&os, buf, options, i + numThreads);
            os.printf("Spu %d", i);
        }
        int column = numThreads + numSpus;
        if (numThreads > 1) {
            padTo(&os, buf, options, column);
            column++;
            os.printf("Average Cpu");
        }
        if (numSpus > 1) {
            padTo(&os, buf, options, column);
            os.printf("Average Spu");
        }
    }
    *outStream << buf.m_data;
    outStream->printf("\n\n");
    fn_82CF1C18(outStream, nodes, 0, numThreads, numSpus, options);
}
