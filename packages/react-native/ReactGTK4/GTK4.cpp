#include "GTK4.h"

void GTK4::on_activate(GApplication* app, gpointer user_data) {
  GtkWindow* window =
      GTK_WINDOW(gtk_application_window_new(GTK_APPLICATION(app)));
  gtk_window_set_title(window, "Porting rn to GTK4");
  gtk_window_set_default_size(window, 400, 200);

  GtkWidget* label = gtk_label_new("Hello from react native");
  gtk_window_set_child(window, label);
  gtk_window_present(window);
}

GTK4::GTK4() {
  this->app =
      gtk_application_new("com.example.gtk4", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);
}

GTK4::~GTK4() {
  g_object_unref(this->app);
}

int GTK4::run(int argc, char** argv) {
  return g_application_run(G_APPLICATION(app), argc, argv);
}
