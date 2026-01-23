// This is a basic ui in C
// I did not create this program or ANY of this code
// The true creator of this program is unknown but I found it on this link: 
// https://www1.se.cuhk.edu.hk/~seem3460/lecture/GTKexample.pdf
// Shoutout to the OG creator who is unknown

#include <gtk/gtk.h>
// Callback function for button click
static void on_button_clicked(GtkButton *button, gpointer user_data) {
g_print("Button clicked!\n");
}
// Callback function for window close
static void on_window_destroy(GtkWidget *widget, gpointer user_data) {
gtk_main_quit();
}
int main(int argc, char *argv[]) {
	gtk_init(&argc, &argv);
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Simple GTK Example");
	gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);
	GtkWidget *button = gtk_button_new_with_label("Click Me");
	gtk_container_add(GTK_CONTAINER(window), button);
	g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);
	g_signal_connect(window, "destroy", G_CALLBACK(on_window_destroy),
	NULL);

gtk_widget_show_all(window);
gtk_main();
return 0;
}
