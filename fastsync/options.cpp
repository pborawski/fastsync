#include "options.h"
#include <QCommandLineParser>

Options::Options()
{

}

bool Options::parse(QCoreApplication* app){

    QCommandLineParser parser;
    parser.setApplicationDescription("FastSync: an application for fast repo synching");
    parser.addHelpOption();
    parser.addVersionOption();

    parser.addOptions({
                          // A boolean option with a single name (-p)
                          {"j",QCoreApplication::translate("main", "Parallelism")},
                          // A boolean option with multiple names (-f, --force)
                          {{"f", "file"},QCoreApplication::translate("main", "Use Repo File")},
                      });

    parser.showHelp();
    parser.process(*app);

    return true;
}
