#!/usr/bin/python

import ROOT
import numpy
import random
import math
import os
import re
from optparse import OptionParser

cvscale = 1.0

fontScale = 700./650.

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
ROOT.gStyle.SetTitleSize(35*fontScale*cvscale, "XYZ")
# ROOT.gStyle.SetTitleXSize(Float_t size = 0.02) # Another way to set the size?
# ROOT.gStyle.SetTitleYSize(Float_t size = 0.02)
ROOT.gStyle.SetTitleXOffset(1.2)
#ROOT.gStyle.SetTitleYOffset(1.2)
ROOT.gStyle.SetTitleOffset(1.2, "YZ") # Another way to set the Offset

# For the axis labels:

ROOT.gStyle.SetLabelColor(1, "XYZ")
ROOT.gStyle.SetLabelFont(43, "XYZ")
ROOT.gStyle.SetLabelOffset(0.0077, "XYZ")
ROOT.gStyle.SetLabelSize(32*fontScale*cvscale, "XYZ")
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



            
cv = ROOT.TCanvas("cv"+str(random.random()),"",int(cvscale*800),int(cvscale*700))
cv.SetPad(0.0, 0.0, 1.0, 1.0)
cv.SetFillStyle(4000)

cvxmin=0.145
cvxmax=0.97
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
cv.SetLogx(0)
cv.SetLogy(0)
cv.SetLogz(0)
                    
cv.SetTopMargin(1-cvymax)
cv.SetBottomMargin(cvymin)

axis=ROOT.TH2F("axis"+str(random.random()),";BDT#lower[0.3]{#scale[0.7]{t-ch.}};Multijet template scale factor",50,-1,1,50,0.4,1.4)
axis.GetXaxis().SetTickLength(0.025/(1-cv.GetLeftMargin()-cv.GetRightMargin()))
axis.GetYaxis().SetTickLength(0.025/(1-cv.GetTopMargin()-cv.GetBottomMargin()))
axis.Draw("AXIS")

xaxis = numpy.zeros(6)
xwidth = numpy.zeros(6)
for i in range(6):
    xaxis[i]=2./6.*i-1.+1./6.
    xwidth[i]=1./6.

muonSF = numpy.array([
    0.57,0.61,0.69,0.71,0.68,0.64
])

muonSFerr = numpy.array([
    0.08,0.03,0.03,0.03,0.03,0.05
])

eleSF = numpy.array([
    1.147,0.790,0.773,0.761,0.647,0.505
])

eleSFerr = numpy.array([
    0.043,0.026,0.029,0.033,0.033,0.054
])

rootObj=[]

def drawLine(value1,value2,color,thick,style):
    tf = ROOT.TBox(-1,value1,1,value2)
    #tf.SetLineColor(color.GetNumber())
    tf.SetFillColor(color.GetNumber())
    tf.SetLineWidth(0)
    tf.SetFillStyle(3445)
    rootObj.append(tf)
    tf.Draw("SameF")
    return tf
            
muonColor = newColor(1.0,0.4,0.0)
eleColor = newColor(0.45,0.0,1.0)

muonBox = drawLine(0.64,0.67,(muonColor),2,2)

eleBox = drawLine(0.825,0.855,(eleColor),2,2)
            
muonGraph = ROOT.TGraphErrors(len(xaxis),xaxis,muonSF,xwidth,muonSFerr)
muonGraph.SetLineColor(muonColor.GetNumber())
muonGraph.SetLineWidth(int(cvscale*3))
muonGraph.SetMarkerColor(muonColor.GetNumber())
muonGraph.SetMarkerSize(1.5)
muonGraph.Draw("SamePE")





eleGraph = ROOT.TGraphErrors(len(xaxis),xaxis,eleSF,xwidth,eleSFerr)
eleGraph.SetLineColor(eleColor.GetNumber())
eleGraph.SetLineWidth(int(cvscale*3))
eleGraph.SetMarkerColor(eleColor.GetNumber())
eleGraph.SetMarkerSize(1.5)
eleGraph.Draw("SamePE")



ROOT.gPad.RedrawAxis()
            
legend = ROOT.TLegend(cvxmax-0.45,cvymax-0.02,cvxmax-0.03,cvymax-0.02-0.08*4)
legend.SetFillColor(ROOT.kWhite)
legend.SetBorderSize(0)
legend.SetTextFont(43)
legend.SetTextSize(34*cvscale*fontScale)
legend.AddEntry(muonGraph,"muon channel","LPE")
legend.AddEntry(muonBox,"inclusive fit","F")
legend.AddEntry(eleGraph,"electron channel","LPE")
legend.AddEntry(eleBox,"inclusive fit","F")
legend.Draw("Same")

cv.Update()
#cv.WaitPrimitive()
cv.Print("qcdStability.pdf")




