#!/bin/bash
pdflatex \
-output-directory temp \
-file-line-error \
-halt-on-error \
main.tex

bibtex temp/main.aux

pdflatex \
-output-directory temp \
-file-line-error \
-halt-on-error \
main.tex
