/* 2025 - 2026 super-toq
 * LICENSE: BSD 2-Clause "Simplified"
 *
 * log_file.h
 *
 * Version 2026-01-05
 */
#pragma once

#include <glib.h>

/* Initialisiert das Logging-System */
void log_file_init(const gchar *app_name);

/* Beendet Logging, Datei schließen */
void log_file_shutdown(void);
