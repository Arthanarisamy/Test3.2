#include "NativeService.hpp"
#include <QDebug>


NativeService::NativeService() {

}

void NativeService::nativeServiceEntry(const QString &jsonString) {
	qDebug () << jsonString;
}


void emitJsFunctionNat (QString) {

}
