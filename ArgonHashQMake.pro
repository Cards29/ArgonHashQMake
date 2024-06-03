TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

ARGON2_DIR = $$PWD/argon2
INCLUDEPATH += $$ARGON2_DIR/include
SOURCES += $$ARGON2_DIR/src/argon2.c \
           $$ARGON2_DIR/src/core.c \
           $$ARGON2_DIR/src/blake2/blake2b.c \
           $$ARGON2_DIR/src/thread.c \
           $$ARGON2_DIR/src/encoding.c \
           $$ARGON2_DIR/src/ref.c \
           password_utils1.c


HEADERS += $$ARGON2_DIR/include/argon2.h \
    password_utils1.h

SOURCES += \
        main.c
