#pragma once
#include <gtk/gtk.h>

class GTK4 {
  GtkApplication* app;

 private:
  static void on_activate(GApplication* app, gpointer user_data);

 public:
  GTK4();
  ~GTK4();

  int run(int argc, char** argv);
};
