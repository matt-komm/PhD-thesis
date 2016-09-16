#!/bin/bash
pdflatex \
-output-directory temp \
-file-line-error \
-halt-on-error \
main.tex
