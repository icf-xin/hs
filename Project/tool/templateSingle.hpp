#ifndef TEMPLATESINGLE_H
#define TEMPLATESINGLE_H
#include <QMutex>
#include <QScopedPointer>
template <class T>
class Singleton
{
public:
    static T* Instance()
    {
        static QMutex mutex;
        static QScopedPointer<T> inst;
        if (Q_UNLIKELY(!inst)) {
            mutex.lock();
            if (!inst) {
                inst.reset(new T);
            }
            mutex.unlock();
        }
        return inst.data();
    }
};

#endif // TEMPLATESINGLE_H
