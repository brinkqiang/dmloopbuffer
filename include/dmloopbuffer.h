
#ifndef __DMLOOPBUFFER_H_INCLUDE__
#define __DMLOOPBUFFER_H_INCLUDE__

#include "dmtypes.h"

class CDMLoopBuffer {
  public:
    CDMLoopBuffer(void);
    ~CDMLoopBuffer(void);

    bool Init(int32_t nSize);

    bool PushBack(const char* pData, int32_t nLen);

    bool PopFront(char* pBuf, int32_t nLen);

    void DiscardFront(int32_t nLen);

  protected:
    char* m_pBuffer;
    char* m_pHead;
    char* m_pTail;
    int32_t m_nSize;
};

#endif // __DMLOOPBUFFER_H_INCLUDE__
