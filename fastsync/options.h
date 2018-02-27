#ifndef OPTIONS_H
#define OPTIONS_H

#include <QCoreApplication>

class Options
{
public:
    Options();
    bool parse(QCoreApplication* app);
};

#endif // OPTIONS_H
