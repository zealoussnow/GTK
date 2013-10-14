/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/21/2013 08:32:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhang Chengfei (), zealoussnow@qq.com
 *        Company:  Wanwei Technology Co., Ltd.
 *
 * =====================================================================================
 */

#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
	GtkWidget *window;
	gtk_init(&argc, &argv);
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_show(window);
	gtk_main();

	return 0;
}
