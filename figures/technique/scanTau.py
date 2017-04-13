#!/usr/bin/python

import ROOT
import numpy
import random
import math
import os
import re
import pyTool
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
ROOT.gStyle.SetPadRightMargin(0.03)
ROOT.gStyle.SetPadBottomMargin(0.15)
ROOT.gStyle.SetStatFontSize(0.025)

ROOT.gStyle.SetOptFit()
ROOT.gStyle.SetOptStat(0)

# For the canvas:
ROOT.gStyle.SetCanvasBorderMode(0)
ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
ROOT.gStyle.SetCanvasDefH(700) #Height of canvas
ROOT.gStyle.SetCanvasDefW(800) #Width of canvas
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

ROOT.gStyle.SetHatchesSpacing(1.3/math.sqrt(cvscale))
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
ROOT.gStyle.SetTitleSize(35*cvscale*fontScale, "XYZ")
# ROOT.gStyle.SetTitleXSize(Float_t size = 0.02) # Another way to set the size?
# ROOT.gStyle.SetTitleYSize(Float_t size = 0.02)
ROOT.gStyle.SetTitleXOffset(1.2)
#ROOT.gStyle.SetTitleYOffset(1.2)
ROOT.gStyle.SetTitleOffset(1.2, "YZ") # Another way to set the Offset

# For the axis labels:

ROOT.gStyle.SetLabelColor(1, "XYZ")
ROOT.gStyle.SetLabelFont(43, "XYZ")
ROOT.gStyle.SetLabelOffset(0.0077, "XYZ")
ROOT.gStyle.SetLabelSize(32*cvscale*fontScale, "XYZ")
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
ROOT.gStyle.SetPaperSize(8.0*1.6*cvscale,7.0*1.6*cvscale)
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

ROOT.gStyle.SetPaintTextFormat("3.0f")

NRGBs = 5;
NCont = 255;

stops = numpy.array( [0.00, 0.34, 0.61, 0.84, 1.00] )
red  = numpy.array( [0.00, 0.00, 0.87, 1.00, 0.51] )
green = numpy.array( [0.00, 0.81, 1.00, 0.20, 0.00] )
blue = numpy.array( [0.51, 1.00, 0.12, 0.00, 0.00] )

colWheelDark = ROOT.TColor.CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont)

for i in range(NRGBs):
    red[i]=min(1,red[i]*1.1+0.25)
    green[i]=min(1,green[i]*1.1+0.25)
    blue[i]=min(1,blue[i]*1.1+0.25)

colWheel = ROOT.TColor.CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont)
ROOT.gStyle.SetNumberContours(NCont)


ROOT.gRandom.SetSeed(123)

rootObjs=[]

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


def makeDistribution(tf,n):
    arr = numpy.zeros(n)
    for i in range(n):
        arr[i]=tf.GetRandom()
    return arr
    
def smear(arr, sig, limits):
    res = numpy.zeros(len(arr))
    for i in range(len(arr)):
        res[i] = arr[i]+ROOT.gRandom.Gaus(0,sig)
        while (res[i]<limits[0] or res[i]>limits[1]):
            res[i] = arr[i]+ROOT.gRandom.Gaus(0,sig)
    return res
    
def fillResponse(hist2D,arrX,arrY):
    for i in range(len(arrX)):
        if arrX[i]<hist2D.GetXaxis().GetXmin():
            arrX[i]=hist2D.GetXaxis().GetXmin()+0.0001
        if arrX[i]>hist2D.GetXaxis().GetXmax():
            arrX[i]=hist2D.GetXaxis().GetXmax()-0.0001
        if arrY[i]<hist2D.GetYaxis().GetXmin():
            arrY[i]=hist2D.GetYaxis().GetXmin()+0.0001
        if arrY[i]>hist2D.GetYaxis().GetXmax():
            arrY[i]=hist2D.GetYaxis().GetXmax()-0.0001
        hist2D.Fill(arrX[i],arrY[i])
        
def getMatrix(hist2D,sig):
    matrix = numpy.zeros((hist2D.GetNbinsX(),hist2D.GetNbinsX()))
    for ibin in range(hist2D.GetNbinsX()):
        for jbin in range(hist2D.GetNbinsX()):
            x = hist2D.GetXaxis().GetBinCenter(ibin+1)
            y = hist2D.GetYaxis().GetBinCenter(jbin+1)
            matrix[ibin,jbin]=ROOT.TMath.Gaus(x-y,0,sig)
    return matrix
   

            
def fillHist(hist,arr):
    for i in range(len(arr)):
        hist.Fill(arr[i])
        
def normHist(hist):
    hist.Scale(1.0/hist.Integral())
    for ibin in range(hist.GetNbinsX()):
        c = hist.GetBinContent(ibin+1)
        w = hist.GetBinWidth(ibin+1)
        hist.SetBinContent(ibin+1,c/w)
        
def normResponse(hist2D):
    for ibin in range(hist2D.GetNbinsX()):
        s = 0.0
        for jbin in range(hist2D.GetNbinsX()):
            s+=hist2D.GetBinContent(jbin+1,ibin+1)
        for jbin in range(hist2D.GetNbinsX()):
            hist2D.SetBinContent(jbin+1,ibin+1,hist2D.GetBinContent(jbin+1,ibin+1)/s)

      
def setupCanvas():    
    cv = ROOT.TCanvas("cv"+str(random.random()),"",int(cvscale*800),int(cvscale*700))
    rootObjs.append(cv)
    cv.SetPad(0.0, 0.0, 1.0, 1.0)
    cv.SetFillStyle(4000)

    cvxmin=0.145
    cvxmax=0.97
    cvymin=0.14
    cvymax=0.97
                
                
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
    
    return cv
    
    
    
N = 10
TOYS=100000
##########################
# DRAW theory
##########################

cvTrue = setupCanvas()
axisTrue=ROOT.TH2F("axis"+str(random.random()),";True / unfolded;a.u.",50,-1,1,50,0,1.25)
axisTrue.GetXaxis().SetTickLength(0.025/(1-cvTrue.GetLeftMargin()-cvTrue.GetRightMargin()))
axisTrue.GetYaxis().SetTickLength(0.025/(1-cvTrue.GetTopMargin()-cvTrue.GetBottomMargin()))
axisTrue.Draw("AXIS")

tfTrue = ROOT.TF1("true",str(2.*TOYS/N)+"*(0.5+0.44*x)",-1,1)
#tfTrue = ROOT.TF1("true",str(2.*TOYS/N)+"*(TMath::Exp(0.1*x)*(1-0.5*TMath::Exp(0.8*x)))",-1,1)
tfTrue.SetLineWidth(3)
tfTrue.SetLineStyle(2)
tfTrue.SetLineColor(newColor(0.65,0.65,0.65).GetNumber())
#tfTrue.Draw("SameL")

histTrue = ROOT.TH1F("trueH","",10,-1,1)
histTrue.Sumw2()
distTrue = makeDistribution(tfTrue,TOYS)
fillHist(histTrue,distTrue)
histTrue.SetMarkerStyle(20)
histTrue.SetMarkerSize(1.4)
histTrue.SetLineWidth(3)
#normHist(histTrue)
histTrue.Scale(1.*N/TOYS/2)
histTrue.Draw("HISTSame")

ROOT.gPad.RedrawAxis()

legendTrue = ROOT.TLegend(cvTrue.GetLeftMargin()+0.03,1-cvTrue.GetTopMargin()-0.02,0.55,1-cvTrue.GetTopMargin()-0.02-3*0.08)
legendTrue.SetFillStyle(0)
legendTrue.SetBorderSize(0)
legendTrue.SetTextFont(43)
legendTrue.SetTextSize(fontScale*34)
legendTrue.AddEntry(histTrue,"True distribution","L")


distSmear = smear(distTrue,0.15,[-1,1])
histResponse = ROOT.TH2F("res","",
    N,histTrue.GetXaxis().GetXmin(),histTrue.GetXaxis().GetXmax(),
    N,histTrue.GetXaxis().GetXmin(),histTrue.GetXaxis().GetXmax(),
)
fillResponse(histResponse,distTrue,distSmear)
normResponse(histResponse)




##########################
# DRAW reco
##########################

vecTrue = numpy.zeros(N)
for ibin in range(N):
    vecTrue[ibin]=histTrue.GetBinContent(ibin+1)

matrix = numpy.zeros((N,N))
for i in range(N):
    s = 0.0
    for j in range(N):
        s+=histResponse.GetBinContent(i+1,j+1)
    for j in range(N):
        matrix[i][j]=histResponse.GetBinContent(i+1,j+1)/s
        
vecReco = numpy.dot(matrix,vecTrue)
histReco = ROOT.TH1F("recoH","",N,histTrue.GetXaxis().GetXmin(),histTrue.GetXaxis().GetXmax())
histReco.Sumw2()
for ibin in range(N):
    histReco.SetBinContent(ibin+1,vecReco[ibin])
histReco.SetBinContent(0,0)
histReco.SetBinContent(N+1,0)

histRecoPoi = histReco.Clone(histReco.GetName()+"poi")

for ibin in range(N):
    c = histReco.GetBinContent(ibin+1)
    err = math.sqrt(c)*0.05
    histReco.SetBinError(ibin+1,err)
    newVal = c+ROOT.gRandom.Gaus(0,err)
    newErr = math.sqrt(newVal)*0.05
    histRecoPoi.SetBinContent(ibin+1,newVal)
    histRecoPoi.SetBinError(ibin+1,newErr)
histRecoPoi.SetBinContent(0,0)
histRecoPoi.SetBinContent(N+1,0)
#histRecoPoi.Scale(histRecoPoi.Integral()/histReco.Integral())


##########################
# DRAW unfolding
##########################

matrix_inv = numpy.linalg.inv(matrix)

vecReco = numpy.zeros(N)
matRecoErr = numpy.zeros((N,N))
vecRecoPoi = numpy.zeros(N)
matRecoPoiErr = numpy.zeros((N,N))
for ibin in range(N):
    vecReco[ibin]=histReco.GetBinContent(ibin+1)
    matRecoErr[ibin,ibin]=histReco.GetBinError(ibin+1)**2
    vecRecoPoi[ibin]=histRecoPoi.GetBinContent(ibin+1)
    matRecoPoiErr[ibin,ibin]=histRecoPoi.GetBinError(ibin+1)**2
    
vecUnfolded = numpy.dot(matrix_inv,vecReco)
matUnfoldedErr = numpy.dot(numpy.dot(matrix_inv,matRecoErr),matrix_inv.T)
vecUnfoldedPoi = numpy.dot(matrix_inv,vecRecoPoi)
matUnfoldedPoiErr = numpy.dot(numpy.dot(matrix_inv,matRecoPoiErr),matrix_inv.T)

histUnfolded = histReco.Clone(histReco.GetName()+"unfolded")
histUnfoldedPoi = histRecoPoi.Clone(histRecoPoi.GetName()+"unfolded")
for ibin in range(N):
    histUnfolded.SetBinContent(ibin+1,vecUnfolded[ibin])
    histUnfolded.SetBinError(ibin+1,math.sqrt(matUnfoldedErr[ibin,ibin]))
    histUnfoldedPoi.SetBinContent(ibin+1,vecUnfoldedPoi[ibin])
    histUnfoldedPoi.SetBinError(ibin+1,math.sqrt(matUnfoldedPoiErr[ibin,ibin]))
    



NSCAN = 1000
tauScanX = numpy.logspace(-2,2,num=NSCAN)
tauScanY = numpy.zeros((10,NSCAN))

for itau,tau in enumerate(tauScanX):
    unfold = ROOT.PyUnfold(histResponse)
    unfold.setData(histReco)
    histUnfoldedPoiReg = histUnfoldedPoi.Clone(histUnfoldedPoi.GetName()+"reg"+str(itau))
    covUnfoldedPoiReg = histResponse.Clone(histResponse.GetName()+"reg"+str(itau))
    unfold.doUnfolding(tau,histUnfoldedPoiReg,covUnfoldedPoiReg)
    print tau,covUnfoldedPoiReg.GetBinContent(1,2)
    for icov in range(10):
        cov = ROOT.PyUtils.getBinByBinCorrelations(covUnfoldedPoiReg)
        tauScanY[icov][itau] = cov[icov]


cvTau = setupCanvas()
cvTau.SetRightMargin(0.16)
axisTau=ROOT.TH2F("axis"+str(random.random()),";Regularization strength #tau;Averaged correlations",50,tauScanX[0],tauScanX[-1],50,-1.2,1.1)
axisTau.GetXaxis().SetTickLength(0.025/(1-cvTrue.GetLeftMargin()-cvTrue.GetRightMargin()))
axisTau.GetYaxis().SetTickLength(0.025/(1-cvTrue.GetTopMargin()-cvTrue.GetBottomMargin()))
axisTau.Draw("AXIS")
cvTau.SetLogx()

legendTau = ROOT.TLegend(1-cvTau.GetRightMargin()+0.005,1-cvTau.GetTopMargin(),0.999,1-cvTau.GetTopMargin()-10*0.08)
legendTau.SetFillStyle(0)
legendTau.SetBorderSize(0)
legendTau.SetTextFont(43)
legendTau.SetTextSize(fontScale*34)


region1 = ROOT.TBox(tauScanX[0],-1.2,0.3,1.1)
region1.SetFillStyle(3445)
region1.SetLineColor(ROOT.kGray)
region1.SetFillColor(ROOT.kGray)
region1.Draw("SameF")

region2 = ROOT.TBox(tauScanX[-1],-1.2,5,1.1)
region2.SetFillStyle(3445)
region2.SetLineColor(ROOT.kGray)
region2.SetFillColor(ROOT.kGray)
region2.Draw("SameF")

pR1 = ROOT.TPaveText(0.025,-0.94,0.12,-1.1)
pR1.SetFillColor(ROOT.kWhite)
pR1.SetLineColor(ROOT.kBlack)
pR1.SetBorderSize(1)
pR1.SetTextFont(43)
pR1.SetTextSize(32*fontScale)
pR1.AddText("#bar{#rho}#lower[0.3]{#scale[0.7]{1}}#kern[-0.5]{ }<#kern[-0.5]{ }0")
pR1.Draw("Same")

pR2 = ROOT.TPaveText(8.5,-0.94,40,-1.1)
pR2.SetFillColor(ROOT.kWhite)
pR2.SetLineColor(ROOT.kBlack)
pR2.SetBorderSize(1)
pR2.SetTextFont(43)
pR2.SetTextSize(32*fontScale)
pR2.AddText("#bar{#rho}#lower[0.3]{#scale[0.7]{1}}#kern[-0.5]{ }>#kern[-0.5]{ }0")
pR2.Draw("Same")

graphCor = ROOT.TGraph(len(tauScanX),tauScanX,tauScanY[0])
graphCor.SetLineWidth(3)
graphCor.SetLineColor(ROOT.kBlack)
rootObjs.append(graphCor)
graphCor.Draw("LSameC")
legendTau.AddEntry(graphCor,"#bar{#rho}#lower[0.3]{#scale[0.7]{global}}","L")

for i in range(1,10):
    graphCor = ROOT.TGraph(len(tauScanX),tauScanX,tauScanY[i])
    graphCor.SetLineWidth(4-i%2)
    graphCor.SetLineColor(newColor(i/10.,(i-5)**2/60.,1.-(i/10.)).GetNumber())
    graphCor.SetLineStyle(2-i%2)
    rootObjs.append(graphCor)
    legendTau.AddEntry(graphCor,"#bar{#rho}#lower[0.3]{#scale[0.7]{"+str(i)+"}}","L")
    graphCor.Draw("LSame")


ROOT.gPad.RedrawAxis()




legendTau.Draw("Same")

cvTau.Print("scanTau.pdf")
cvTau.Print("scanTau.C")

cvTrue.cd()

unfold = ROOT.PyUnfold(histResponse)
unfold.setData(histReco)
histUnfoldedReg = histUnfolded.Clone(histUnfolded.GetName()+"reg")
covUnfoldedReg = histResponse.Clone(histResponse.GetName()+"reg")
unfold.doUnfolding(2.1,histUnfoldedReg,covUnfoldedReg)
for i in range(N):
    histUnfoldedReg.SetBinContent(i+1,histTrue.GetBinContent(i+1))
histUnfoldedReg.SetLineStyle(1)
histUnfoldedReg.SetLineWidth(3)
histUnfoldedReg.SetMarkerStyle(20)
histUnfoldedReg.SetMarkerSize(1.4)
histUnfoldedReg.SetMarkerColor(newColor(0.4,0.0,1).GetNumber())
histUnfoldedReg.SetLineColor(newColor(0.4,0.0,1).GetNumber())
histUnfoldedReg.Draw("HISTSamePE")

unfold.setData(histRecoPoi)
histUnfoldedPoiReg = histUnfoldedPoi.Clone(histUnfoldedPoi.GetName()+"regPoi")
covUnfoldedPoiReg = histResponse.Clone(histResponse.GetName()+"regPoi")
unfold.doUnfolding(2.1,histUnfoldedPoiReg,covUnfoldedPoiReg)

histUnfoldedPoiReg.SetLineStyle(2)
histUnfoldedPoiReg.SetLineWidth(3)
histUnfoldedPoiReg.SetLineColor(newColor(1,0.5,0.0).GetNumber())
histUnfoldedPoiReg.Draw("HISTSame")

legendTrue.AddEntry(histUnfoldedReg,"Unfolded true dist. (reg.)","PE")
legendTrue.AddEntry(histUnfoldedPoiReg,"Unfolded stat. fluc. (reg.)","L")

ROOT.gPad.RedrawAxis()

legendTrue.Draw("Same")

cvTrue.Update()
cvTrue.Print("unfoldDist.pdf")
cvTrue.Print("unfoldDist.C")
'''
cvRes.Update()
cvRes.Print("response.pdf")

cvReco.Update()
cvReco.Print("recoDist.pdf")
'''


