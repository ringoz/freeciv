## Process this file with automake to produce Makefile.in

## Automake should distribute config.rpath automatically - and new
## versions probably do. We still support versions that do not, so
## it's in the list below.
## It should also install it automatically when running autogen.sh.
EXTRA_DIST =	freeciv.project		\
		snapshot.project	\
		fcgui.in		\
		fcser.in		\
		fcruledit.in		\
		fcruleup.in		\
		fc_gitrev_gen.h.tmpl	\
		generate_gitrev.sh	\
		generate_langstat.sh	\
		langstat_core.txt	\
		langstat_nations.txt	\
		langstat_ruledit.txt	\
		org.freeciv.gtk3.desktop.in	\
		org.freeciv.gtk322.desktop.in	\
		org.freeciv.sdl2.desktop.in	\
		org.freeciv.qt.desktop.in \
		org.freeciv.server.desktop.in	\
		org.freeciv.mp.gtk3.desktop.in	\
		org.freeciv.mp.gtk4.desktop.in	\
		org.freeciv.mp.qt.desktop.in	\
		org.freeciv.ruledit.desktop.in	\
		freeciv-gtk3.appdata.xml.in \
		freeciv-sdl2.appdata.xml.in \
		freeciv-qt.appdata.xml.in \
		freeciv-server.appdata.xml.in \
		freeciv-mp-gtk3.appdata.xml.in \
		freeciv-mp-gtk4.appdata.xml.in \
		freeciv-mp-qt.appdata.xml.in \
		freeciv-ruledit.appdata.xml.in \
		config.rpath		\
		Makerules.mk		\
		langnames.txt

langstat_core.txt:
	"$(top_srcdir)/bootstrap/generate_langstat.sh" core "$(top_srcdir)" "$(top_builddir)"

langstat_nations.txt:
	"$(top_srcdir)/bootstrap/generate_langstat.sh" nations "$(top_srcdir)" "$(top_builddir)"

langstat_ruledit.txt:
	"$(top_srcdir)/bootstrap/generate_langstat.sh" ruledit "$(top_srcdir)" "$(top_builddir)"

.PHONY: langstat_core.txt langstat_nations.txt langstat_ruledit.txt

MAINTAINERCLEANFILES = langstat_core.txt langstat_nations.txt langstat_ruledit.txt
