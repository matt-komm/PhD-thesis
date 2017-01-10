#!/usr/bin/python

import ROOT
import numpy
import random
import math
import os
import re
import lhapdf
from optparse import OptionParser

cvscale = 2.0

ROOT.gROOT.Reset()
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptFit(0)
ROOT.gROOT.Reset()
ROOT.gROOT.SetStyle("Plain")
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptFit(1111)
ROOT.gStyle.SetPadTopMargin(0.08)
ROOT.gStyle.SetPadLeftMargin(0.13)
ROOT.gStyle.SetPadRightMargin(0.26)
ROOT.gStyle.SetPadBottomMargin(0.15)
ROOT.gStyle.SetStatFontSize(0.025)

ROOT.gStyle.SetOptFit()
ROOT.gStyle.SetOptStat(0)

# For the canvas:
ROOT.gStyle.SetCanvasBorderMode(0)
ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
ROOT.gStyle.SetCanvasDefH(600) #Height of canvas
ROOT.gStyle.SetCanvasDefW(600) #Width of canvas
ROOT.gStyle.SetCanvasDefX(0)   #POsition on screen
ROOT.gStyle.SetCanvasDefY(0)

# For the Pad:
ROOT.gStyle.SetPadBorderMode(0)
# ROOT.gStyle.SetPadBorderSize(Width_t size = 1)
ROOT.gStyle.SetPadColor(ROOT.kWhite)
#ROOT.gStyle.SetPadGridX(True)
#ROOT.gStyle.SetPadGridY(True)
ROOT.gStyle.SetGridColor(ROOT.kBlack)
ROOT.gStyle.SetGridStyle(2)
ROOT.gStyle.SetGridWidth(1)

# For the frame:

ROOT.gStyle.SetFrameBorderMode(0)
ROOT.gStyle.SetFrameBorderSize(0)
ROOT.gStyle.SetFrameFillColor(0)
ROOT.gStyle.SetFrameFillStyle(0)
ROOT.gStyle.SetFrameLineColor(1)
ROOT.gStyle.SetFrameLineStyle(1)
ROOT.gStyle.SetFrameLineWidth(0)

# For the histo:
# ROOT.gStyle.SetHistFillColor(1)
# ROOT.gStyle.SetHistFillStyle(0)
# ROOT.gStyle.SetLegoInnerR(Float_t rad = 0.5)
# ROOT.gStyle.SetNumberContours(Int_t number = 20)

ROOT.gStyle.SetEndErrorSize(2)
#ROOT.gStyle.SetErrorMarker(20)
ROOT.gStyle.SetErrorX(0.)

ROOT.gStyle.SetMarkerStyle(20)
#ROOT.gStyle.SetMarkerStyle(20)

#For the fit/function:
ROOT.gStyle.SetOptFit(1)
ROOT.gStyle.SetFitFormat("5.4g")
ROOT.gStyle.SetFuncColor(2)
ROOT.gStyle.SetFuncStyle(1)
ROOT.gStyle.SetFuncWidth(1)

#For the date:
ROOT.gStyle.SetOptDate(0)
# ROOT.gStyle.SetDateX(Float_t x = 0.01)
# ROOT.gStyle.SetDateY(Float_t y = 0.01)

# For the statistics box:
ROOT.gStyle.SetOptFile(0)
ROOT.gStyle.SetOptStat(0) # To display the mean and RMS:   SetOptStat("mr")
ROOT.gStyle.SetStatColor(ROOT.kWhite)
ROOT.gStyle.SetStatFont(42)
ROOT.gStyle.SetStatFontSize(0.025)
ROOT.gStyle.SetStatTextColor(1)
ROOT.gStyle.SetStatFormat("6.4g")
ROOT.gStyle.SetStatBorderSize(1)
ROOT.gStyle.SetStatH(0.1)
ROOT.gStyle.SetStatW(0.15)

ROOT.gStyle.SetHatchesSpacing(0.8/math.sqrt(cvscale))
ROOT.gStyle.SetHatchesLineWidth(int(2*cvscale))

# ROOT.gStyle.SetStaROOT.TStyle(Style_t style = 1001)
# ROOT.gStyle.SetStatX(Float_t x = 0)
# ROOT.gStyle.SetStatY(Float_t y = 0)


#ROOT.gROOT.ForceStyle(True)
#end modified

# For the Global title:

ROOT.gStyle.SetOptTitle(0)

# ROOT.gStyle.SetTitleH(0) # Set the height of the title box
# ROOT.gStyle.SetTitleW(0) # Set the width of the title box
#ROOT.gStyle.SetTitleX(0.35) # Set the position of the title box
#ROOT.gStyle.SetTitleY(0.986) # Set the position of the title box
# ROOT.gStyle.SetTitleStyle(Style_t style = 1001)
#ROOT.gStyle.SetTitleBorderSize(0)

# For the axis titles:
ROOT.gStyle.SetTitleColor(1, "XYZ")
ROOT.gStyle.SetTitleFont(43, "XYZ")
ROOT.gStyle.SetTitleSize(36*cvscale, "XYZ")
# ROOT.gStyle.SetTitleXSize(Float_t size = 0.02) # Another way to set the size?
# ROOT.gStyle.SetTitleYSize(Float_t size = 0.02)
ROOT.gStyle.SetTitleXOffset(1.2)
#ROOT.gStyle.SetTitleYOffset(1.2)
ROOT.gStyle.SetTitleOffset(1.2, "YZ") # Another way to set the Offset

# For the axis labels:

ROOT.gStyle.SetLabelColor(1, "XYZ")
ROOT.gStyle.SetLabelFont(43, "XYZ")
ROOT.gStyle.SetLabelOffset(0.0077, "XYZ")
ROOT.gStyle.SetLabelSize(30*cvscale, "XYZ")
#ROOT.gStyle.SetLabelSize(0.04, "XYZ")

# For the axis:

ROOT.gStyle.SetAxisColor(1, "XYZ")
ROOT.gStyle.SetAxisColor(1, "XYZ")
ROOT.gStyle.SetStripDecimals(True)
ROOT.gStyle.SetTickLength(0.03, "Y")
ROOT.gStyle.SetTickLength(0.05, "X")
ROOT.gStyle.SetNdivisions(1005, "X")
ROOT.gStyle.SetNdivisions(506, "Y")

ROOT.gStyle.SetPadTickX(1)  # To get tick marks on the opposite side of the frame
ROOT.gStyle.SetPadTickY(1)

# Change for log plots:
ROOT.gStyle.SetOptLogx(0)
ROOT.gStyle.SetOptLogy(0)
ROOT.gStyle.SetOptLogz(0)

#ROOT.gStyle.SetPalette(1) #(1,0)

# another top group addition

# Postscript options:
#ROOT.gStyle.SetPaperSize(20., 20.)
#ROOT.gStyle.SetPaperSize(ROOT.TStyle.kA4)
#ROOT.gStyle.SetPaperSize(27., 29.7)
#ROOT.gStyle.SetPaperSize(27., 29.7)
ROOT.gStyle.SetPaperSize(8.0*1.6*cvscale,6.0*1.6*cvscale)
ROOT.TGaxis.SetMaxDigits(3)
ROOT.gStyle.SetLineScalePS(2)

# ROOT.gStyle.SetLineStyleString(Int_t i, const char* text)
# ROOT.gStyle.SetHeaderPS(const char* header)
# ROOT.gStyle.SetTitlePS(const char* pstitle)
#ROOT.gStyle.SetColorModelPS(1)

# ROOT.gStyle.SetBarOffset(Float_t baroff = 0.5)
# ROOT.gStyle.SetBarWidth(Float_t barwidth = 0.5)
# ROOT.gStyle.SetPaintTextFormat(const char* format = "g")
# ROOT.gStyle.SetPalette(Int_t ncolors = 0, Int_t* colors = 0)
# ROOT.gStyle.SetTimeOffset(Double_t toffset)
# ROOT.gStyle.SetHistMinimumZero(kTRUE)
ROOT.gStyle.SetPalette(1)
ROOT.gStyle.SetPaintTextFormat("7.4f")




colors=[]
def newColor(red,green,blue):
    newColor.colorindex+=1
    color=ROOT.TColor(newColor.colorindex,red,green,blue)
    colors.append(color)
    return color
    
newColor.colorindex=301

def getDarkerColor(color):
    darkerColor=newColor(color.GetRed()*0.6,color.GetGreen()*0.6,color.GetBlue()*0.6)
    return darkerColor



            
cv = ROOT.TCanvas("cv"+str(random.random()),"",int(cvscale*800),int(cvscale*600))
cv.SetPad(0.0, 0.0, 1.0, 1.0)
cv.SetFillStyle(4000)

cvxmin=0.145
cvxmax=0.71
cvymin=0.14
cvymax=0.935
            
            
cv.SetBorderMode(0)
cv.SetGridx(False)
cv.SetGridy(False)


#For the frame:
cv.SetFrameBorderMode(0)
cv.SetFrameBorderSize(1)
cv.SetFrameFillColor(0)
cv.SetFrameFillStyle(0)
cv.SetFrameLineColor(1)
cv.SetFrameLineStyle(1)
cv.SetFrameLineWidth(int(1*cvscale))

# Margins:
cv.SetLeftMargin(cvxmin)
cv.SetRightMargin(1-cvxmax)

# For the Global title:
cv.SetTitle("")

# For the axis:
cv.SetTickx(1)  # To get tick marks on the opposite side of the frame
cv.SetTicky(1)

# Change for log plots:
cv.SetLogx(1)
cv.SetLogy(0)
cv.SetLogz(0)
                    
cv.SetTopMargin(1-cvymax)
cv.SetBottomMargin(cvymin)

N=1000
Q=10

axis=ROOT.TH2F("axis"+str(random.random()),";x;PDF(x,#kern[-0.5]{ }#mu#lower[0.6]{#scale[0.7]{F}}="+str(Q)+"#kern[-0.5]{ }GeV)",50,0.001,1,50,0,1.2)
axis.GetXaxis().SetTickLength(0.025/(1-cv.GetLeftMargin()-cv.GetRightMargin()))
axis.GetYaxis().SetTickLength(0.025/(1-cv.GetTopMargin()-cv.GetBottomMargin()))
axis.Draw("AXIS")
            
lhapdf.initPDFSetByName("NNPDF30_nnlo_as_0118_nf_5.LHgrid")
lhapdf.initPDF(0)

xvalues = numpy.logspace(-3,0,N)#numpy.logspace(-4,0)
yvaluesList=[]
graphList = []

styles =[
    [0,ROOT.kBlack,     5,1,10,"g (#times#kern[-0.5]{ }0.1)"],
    [1,ROOT.kBlue-4,    5,1,1,"d"],
    [-1,ROOT.kBlue+1,   8,2,1,"#bar{d}"],
    [2,ROOT.kViolet,    5,1,1,"u"],
    [-2,ROOT.kPink+4,   8,2,1,"#bar{u}"],
    [3,ROOT.kTeal+9,    5,1,1,"s"],
    [-3,ROOT.kTeal+3,   8,2,1,"#bar{s}"],
    [4,ROOT.kOrange+7,  5,1,1,"c"],
    [-4,ROOT.kOrange+9, 8,2,1,"#bar{c}"],
    [5,ROOT.kSpring+9,  5,1,1,"b"],
    [-5,ROOT.kSpring+4, 8,2,1,"#bar{b}"],

]

for f in range(len(styles)):
    yvalues = numpy.zeros(N)
    yvaluesList.append(yvalues)
    for i in range(N):
        yvalues[i]= lhapdf.xfx(xvalues[i],Q,styles[f][0])/styles[f][4]
    graph = ROOT.TGraph(N,xvalues,yvalues)
    graph.SetLineColor(styles[f][1])
    graph.SetLineStyle(styles[f][3])
    graph.SetLineWidth(styles[f][2])
    graph.Draw("LSame")
    graphList.append(graph)


ROOT.gPad.RedrawAxis()
            
legend = ROOT.TLegend(cvxmax+0.01,cvymax,0.99,cvymax-0.075*len(styles))
legend.SetFillColor(ROOT.kWhite)
legend.SetBorderSize(0)
legend.SetTextFont(43)
legend.SetTextSize(32*cvscale)
for f in range(len(styles)):
    legend.AddEntry(graphList[f],styles[f][5],"L")

legend.Draw("Same")

cv.Update()
#cv.WaitPrimitive()
cv.Print("nnpdf_q"+str(Q)+".pdf")




