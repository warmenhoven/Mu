#pragma once

#include <QDialog>
#include <QString>

namespace Ui {
class DebugViewer;
}

class DebugViewer : public QDialog
{
   Q_OBJECT

public:
   explicit DebugViewer(QWidget *parent = 0);
   ~DebugViewer();

private slots:
   int64_t numberFromString(QString str, bool negativeAllowed);
   QString stringFromNumber(int64_t number, bool hex, uint32_t forcedZeros = 0);

   void debugRadioButtonHandler();

   void on_debugGetHexValues_clicked();

   void on_debug8Bit_clicked();
   void on_debug16Bit_clicked();
   void on_debug32Bit_clicked();

   void on_debugDump_clicked();
   void on_debugShowRegisters_clicked();
   void on_debugPrintDebugLogs_clicked();
   void on_debugEraseDebugLogs_clicked();

private:
   uint8_t bitsPerEntry;
   Ui::DebugViewer *ui;
};
