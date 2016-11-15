#!/bin/bash
pdflatex \
-output-directory temp \
-file-line-error \
-halt-on-error \
main.tex && \
bibtex temp/main.aux && \
cd temp && \
makeglossaries main && \
cd .. && \
pdflatex \
-output-directory temp \
-file-line-error \
-halt-on-error \
main.tex && \
pdflatex \
-output-directory temp \
-file-line-error \
-halt-on-error \
main.tex

