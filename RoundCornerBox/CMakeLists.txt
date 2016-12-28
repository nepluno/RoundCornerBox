append_files (Headers "hpp" .)
append_files (Sources "cpp" .)

add_executable (RoundCornerBox ${Headers} ${Sources})

INSTALL_TARGETS(/bin RoundCornerBox)
