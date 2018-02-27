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
                          {{"j","parallelism"},QCoreApplication::translate("main", "Parallelism - number of threads")},
                          {{"f", "file"},QCoreApplication::translate("main", "Use Yum Repo File")},
                          {{"r", "repoid"},QCoreApplication::translate("main", "repoid to sync")},
                      });

    parser.showHelp();
    parser.process(*app);

    return true;
}
