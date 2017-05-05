#!/usr/bin/python

import ROOT
import numpy
import random
import math
import os
import re
from optparse import OptionParser

cvscale = 1.0

fontScale = 800./650.

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
def hex2rgb(value):
    """Return (red, green, blue) for the color given as #rrggbb."""
    value = value.lstrip('#')
    lv = len(value)
    return tuple(int(value[i:i + lv // 3], 16)/255.0 for i in range(0, lv, lv // 3))


def newColor(red,green,blue):
    newColor.colorindex+=1
    color=ROOT.TColor(newColor.colorindex,red,green,blue)
    colors.append(color)
    return color
    
newColor.colorindex=301

def getDarkerColor(color):
    darkerColor=newColor(color.GetRed()*0.6,color.GetGreen()*0.6,color.GetBlue()*0.6)
    return darkerColor



            
cv = ROOT.TCanvas("cv"+str(random.random()),"",int(cvscale*1150),int(cvscale*800))
cv.SetPad(0.0, 0.0, 1.0, 1.0)
cv.SetFillStyle(4000)

cvxmin=0.04
cvxmax=0.76
cvymin=0.14
cvymax=0.92
            
            
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

itemSpace=1
skipSpace =0.7

rootObj=[]

def drawMeasurement(index,mean,stat,tot,statColor,sysColor):
    space = 0.25

    boxSys1 = ROOT.TBox(mean-tot,index+space,mean-stat,index+itemSpace-space)
    #tf.SetLineColor(color.GetNumber())
    boxSys1.SetFillColor(sysColor.GetNumber())
    boxSys1.SetLineWidth(0)
    boxSys1.SetFillStyle(1001)
    rootObj.append(boxSys1)
    boxSys1.Draw("SameF")
    
    boxSys2 = ROOT.TBox(mean+tot,index+space,mean+stat,index+itemSpace-space)
    #tf.SetLineColor(color.GetNumber())
    boxSys2.SetFillColor(sysColor.GetNumber())
    boxSys2.SetLineWidth(0)
    boxSys2.SetFillStyle(1001)
    rootObj.append(boxSys2)
    boxSys2.Draw("SameF")
    
    boxStat = ROOT.TBox(mean-stat,index+space*0.9,mean+stat,index+itemSpace-space*0.9)
    #tf.SetLineColor(color.GetNumber())
    boxStat.SetFillColor(statColor.GetNumber())
    boxStat.SetLineWidth(0)
    boxStat.SetFillStyle(1001)
    rootObj.append(boxStat)
    boxStat.Draw("SameF")
    
    line = ROOT.TBox(mean,index+space*0.5,mean,index+itemSpace-space*0.5)
    line.SetLineColor(1)
    line.SetLineWidth(3)
    rootObj.append(line)
    line.Draw("SameL")
    
    return line,boxStat,boxSys2
    
def drawLine(index):
    tf = ROOT.TLine(axis.GetXaxis().GetXmin(),index,axis.GetXaxis().GetXmax(),index)
    #tf.SetLineColor(color.GetNumber())
    tf.SetLineWidth(1)
    rootObj.append(tf)
    tf.Draw("Same")
    return tf
    
heightMax = 1

    
resultList = [
    ["t+#bar{t}","2 bin",27.6,3.1,11.5],
    ["t+#bar{t}","TUnfold",26.0,2.6,10.5],
    ["top quark#kern[-0.5]{ }+#kern[-0.5]{ }antiquark"],
    [""],
    ["#bar{t}","2 bin",20.3,5.7,16.0],
    ["#bar{t}","TUnfold",21.1,4.6,13.8],
    ["top antiquark"],
    [""],
    ["t","2 bin",31.7,3.7,11.2],
    ["t","TUnfold",29.0,3.2,10.5],
    ["top quark"],
]

for i,res in enumerate(resultList):
    if res[0]!="":
        heightMax+=itemSpace
    else:
        heightMax+=skipSpace
        

axis=ROOT.TH2F("axis"+str(random.random()),";Top quark spin asymmetry;",50,-0.2,0.5, 50,0,heightMax)
axis.GetXaxis().SetTickLength(0.025/(1-cv.GetLeftMargin()-cv.GetRightMargin()))
axis.GetYaxis().SetTickLength(0.)
axis.GetYaxis().SetLabelSize(0)
axis.Draw("AXIS")

legend = ROOT.TLegend(cvxmax+0.01, cvymax, 0.99, cvymax-6*0.08)
legend.SetBorderSize(0)
legend.SetTextFont(43)
legend.SetTextSize(35*fontScale)
legend.SetFillStyle(0)
            
statColor = newColor(0.5,0.25,1)
sysColor = newColor(0.8,0.8,0.8)

currentHeight = 0.5
for res in resultList:
    
    if res[0]=="":
        #drawLine(currentHeight+0.5*skipSpace)
        currentHeight+=skipSpace
        continue
    elif len(res)<2:
        pave = ROOT.TPaveText(axis.GetXaxis().GetXmin()+0.01,currentHeight+itemSpace*0.5,-0.05,currentHeight+itemSpace*0.5)
        pave.SetTextFont(43)
        pave.SetTextSize(32*fontScale)
        pave.AddText(res[0])
        pave.SetTextAlign(12)
        rootObj.append(pave)
        pave.Draw("Same")
        currentHeight+=itemSpace
        continue

    pave = ROOT.TPaveText(axis.GetXaxis().GetXmin()+0.01,currentHeight+itemSpace*0.5,-0.05,currentHeight+itemSpace*0.5)
    pave.SetTextFont(43)
    pave.SetTextSize(32*fontScale)
    pave.AddText("   "+res[1])
    pave.SetTextAlign(12)
    rootObj.append(pave)
    pave.Draw("Same")
    
    
    line,stat,tot = drawMeasurement(currentHeight,res[2]*0.01,res[3]*0.01,res[4]*0.01,statColor,sysColor)

    currentHeight+=itemSpace
    
legend.AddEntry(stat,"statistical","F")
legend.AddEntry("","uncertainty","")
legend.AddEntry(tot,"total","F")
legend.AddEntry("","uncertainty","")

tfSM = ROOT.TBox(0.44,0,0.44,heightMax)
tfSM.SetLineColor(1)
tfSM.SetLineWidth(3)
tfSM.SetLineStyle(2)
rootObj.append(tfSM)
tfSM.Draw("SameL")
legend.AddEntry(tfSM,"SM","L")
legend.AddEntry("","prediction","")

pCMS=ROOT.TPaveText(cvxmin+0.0,0.94,cvxmin+0.,0.94,"NDC")
pCMS.SetFillColor(ROOT.kWhite)
pCMS.SetBorderSize(0)
pCMS.SetTextFont(63)
pCMS.SetTextSize(34*cvscale*fontScale)
pCMS.SetTextAlign(11)
pCMS.AddText("CMS")
pCMS.Draw("Same")

pPreliminary=ROOT.TPaveText(cvxmin+0.0+0.1,0.94,cvxmin+0.+0.1,0.94,"NDC")
pPreliminary.SetFillColor(ROOT.kWhite)
pPreliminary.SetBorderSize(0)
pPreliminary.SetTextFont(53)
pPreliminary.SetTextSize(34*cvscale*fontScale)
pPreliminary.SetTextAlign(11)
pPreliminary.AddText("Preliminary")
pPreliminary.Draw("Same")

pLumi=ROOT.TPaveText(cvxmax,0.94,cvxmax,0.94,"NDC")
pLumi.SetFillColor(ROOT.kWhite)
pLumi.SetBorderSize(0)
pLumi.SetTextFont(43)
pLumi.SetTextSize(34*cvscale*fontScale)
pLumi.SetTextAlign(31)
pLumi.AddText("#mu#kern[-0.5]{ }+#kern[-0.5]{ }jets, 19.7#kern[-0.5]{ }fb#lower[-0.7]{#scale[0.7]{-1}} (8TeV)")
pLumi.Draw("Same")
            
legend.Draw("Same")

            
ROOT.gPad.RedrawAxis()

cv.Update()
#cv.WaitPrimitive()
cv.Print("results.pdf")




