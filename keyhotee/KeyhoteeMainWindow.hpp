#pragma once
#include <QMainWindow>
#include <memory>

namespace Ui { class KeyhoteeMainWindow; }

class KeyhoteeMainWindow  : public QMainWindow 
{
  public:
      KeyhoteeMainWindow();
      ~KeyhoteeMainWindow();

      void addContact();

  private:
      std::unique_ptr<Ui::KeyhoteeMainWindow> ui;
};
