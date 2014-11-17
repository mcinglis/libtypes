
# This empty Makefile allows dependents to decouple themselves from Libtypes'
# (lack of) build process. By telling Libtypes to "build", even though it doesn't
# do anything, then if Libtypes does need to be built in future, they don't need
# to know.

.PHONY: all
all:

