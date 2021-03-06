void unfoldedParton_mu_y()
{
//=========Macro generated from canvas: cv0.539176322022/
//=========  (Wed Aug 23 03:35:25 2017) by ROOT version6.02/05
   TCanvas *cv0.539176322022 = new TCanvas("cv0.539176322022", "",0,0,800,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cv0.539176322022->SetHighLightColor(2);
   cv0.539176322022->Range(-0.5164557,-0.1755437,2.521519,0.8883576);
   cv0.539176322022->SetFillColor(0);
   cv0.539176322022->SetFillStyle(4000);
   cv0.539176322022->SetBorderMode(0);
   cv0.539176322022->SetBorderSize(2);
   cv0.539176322022->SetTickx(1);
   cv0.539176322022->SetTicky(1);
   cv0.539176322022->SetLeftMargin(0.17);
   cv0.539176322022->SetRightMargin(0.04);
   cv0.539176322022->SetTopMargin(0.08);
   cv0.539176322022->SetBottomMargin(0.165);
   cv0.539176322022->SetFrameFillStyle(0);
   cv0.539176322022->SetFrameBorderMode(0);
   cv0.539176322022->SetFrameFillStyle(0);
   cv0.539176322022->SetFrameBorderMode(0);
   
   TH2F *axis_unfoldedHist_responseParton0.771198397120.6562443504551 = new TH2F("axis_unfoldedHist_responseParton0.771198397120.6562443504551","",50,0,2.4,50,0,0.8032455);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->SetMarkerStyle(20);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetTitle("top quark |y|");
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetNdivisions(1005);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetLabelFont(43);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetLabelOffset(0.015);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetLabelSize(36.92308);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetTitleSize(40.38462);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetTickLength(0.025);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetTitleOffset(1.5);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetXaxis()->SetTitleFont(43);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetTitle("1/#sigma#kern[-0.4]{ }#times#kern[-0.4]{ }d#kern[-0.6]{ }#sigma/#kern[-0.6]{ }d#kern[-0.6]{ }|y|");
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetNdivisions(506);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetLabelFont(43);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetLabelOffset(0.0077);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetLabelSize(36.92308);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetTitleSize(40.38462);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetTickLength(0.02);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetTitleOffset(1.55);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetYaxis()->SetTitleFont(43);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetZaxis()->SetLabelFont(43);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetZaxis()->SetLabelOffset(0.0077);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetZaxis()->SetLabelSize(36.92308);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetZaxis()->SetTitleSize(40.38462);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetZaxis()->SetTitleOffset(1.55);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->GetZaxis()->SetTitleFont(43);
   axis_unfoldedHist_responseParton0.771198397120.6562443504551->Draw("AXIS");
   Double_t xAxis3[7] = {0, 0.3, 0.7, 1, 1.4, 1.8, 2.4}; 
   
   TH1D *genHist_responseParton0.5589994127962 = new TH1D("genHist_responseParton0.5589994127962","",6, xAxis3);
   genHist_responseParton0.5589994127962->SetBinContent(1,0.5883685);
   genHist_responseParton0.5589994127962->SetBinContent(2,0.561648);
   genHist_responseParton0.5589994127962->SetBinContent(3,0.510371);
   genHist_responseParton0.5589994127962->SetBinContent(4,0.4418581);
   genHist_responseParton0.5589994127962->SetBinContent(5,0.3440182);
   genHist_responseParton0.5589994127962->SetBinContent(6,0.2189474);
   genHist_responseParton0.5589994127962->SetBinContent(7,0.0003003679);
   genHist_responseParton0.5589994127962->SetBinError(1,0.0001128465);
   genHist_responseParton0.5589994127962->SetBinError(2,9.49333e-05);
   genHist_responseParton0.5589994127962->SetBinError(3,0.0001034539);
   genHist_responseParton0.5589994127962->SetBinError(4,7.981966e-05);
   genHist_responseParton0.5589994127962->SetBinError(5,6.312964e-05);
   genHist_responseParton0.5589994127962->SetBinError(6,2.929916e-05);
   genHist_responseParton0.5589994127962->SetBinError(7,4.86744e-06);
   genHist_responseParton0.5589994127962->SetEntries(1.812451e+08);
   genHist_responseParton0.5589994127962->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6699ff");
   genHist_responseParton0.5589994127962->SetLineColor(ci);
   genHist_responseParton0.5589994127962->SetLineWidth(3);
   genHist_responseParton0.5589994127962->GetXaxis()->SetRange(1,6);
   genHist_responseParton0.5589994127962->GetXaxis()->SetLabelFont(42);
   genHist_responseParton0.5589994127962->GetXaxis()->SetLabelSize(0.035);
   genHist_responseParton0.5589994127962->GetXaxis()->SetTitleSize(0.035);
   genHist_responseParton0.5589994127962->GetXaxis()->SetTitleFont(42);
   genHist_responseParton0.5589994127962->GetYaxis()->SetNdivisions(506);
   genHist_responseParton0.5589994127962->GetYaxis()->SetLabelFont(43);
   genHist_responseParton0.5589994127962->GetYaxis()->SetLabelOffset(0.0077);
   genHist_responseParton0.5589994127962->GetYaxis()->SetLabelSize(36.92308);
   genHist_responseParton0.5589994127962->GetYaxis()->SetTitleSize(40.38462);
   genHist_responseParton0.5589994127962->GetYaxis()->SetTitleOffset(1.55);
   genHist_responseParton0.5589994127962->GetYaxis()->SetTitleFont(43);
   genHist_responseParton0.5589994127962->GetZaxis()->SetLabelFont(43);
   genHist_responseParton0.5589994127962->GetZaxis()->SetLabelOffset(0.0077);
   genHist_responseParton0.5589994127962->GetZaxis()->SetLabelSize(36.92308);
   genHist_responseParton0.5589994127962->GetZaxis()->SetTitleSize(40.38462);
   genHist_responseParton0.5589994127962->GetZaxis()->SetTitleOffset(1.55);
   genHist_responseParton0.5589994127962->GetZaxis()->SetTitleFont(43);
   genHist_responseParton0.5589994127962->Draw("HISTSame");
   TMarker *marker = new TMarker(0.15,0.5564496,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   TLine *line = new TLine(0.15,0.5283321,0.15,0.5845672);
   line->Draw();
   line = new TLine(0.11,0.5845672,0.19,0.5845672);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.11,0.5283321,0.19,0.5283321);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(0.5,0.5877756,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(0.5,0.55767,0.5,0.6178812);
   line->Draw();
   line = new TLine(0.46,0.6178812,0.54,0.6178812);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.46,0.55767,0.54,0.55767);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(0.85,0.4772581,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(0.85,0.439687,0.85,0.5148291);
   line->Draw();
   line = new TLine(0.81,0.5148291,0.89,0.5148291);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.81,0.439687,0.89,0.439687);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(1.2,0.3954609,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(1.2,0.3666194,1.2,0.4243024);
   line->Draw();
   line = new TLine(1.16,0.4243024,1.24,0.4243024);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.16,0.3666194,1.24,0.3666194);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(1.6,0.3812253,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(1.6,0.3481892,1.6,0.4142613);
   line->Draw();
   line = new TLine(1.56,0.4142613,1.64,0.4142613);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.56,0.3481892,1.64,0.3481892);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(2.1,0.2401716,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(2.1,0.2220444,2.1,0.2582988);
   line->Draw();
   line = new TLine(2.06,0.2582988,2.14,0.2582988);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.06,0.2220444,2.14,0.2220444);
   line->SetLineWidth(2);
   line->Draw();
   
   TLegend *leg = new TLegend(0.41,0.74,0.93,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(34);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("genHist_responseParton0.558999412796","Powheg#kern[-0.5]{ }+#kern[-0.5]{ }Pythia8","L");

   ci = TColor::GetColor("#6699ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("unfoldedHist_responseParton0.77119839712","Unfolded pseudo-data","PE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(43);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.64,0.94,0.64,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(63);
   pt->SetTextSize(37);
   TText *AText = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.96,0.94,0.96,0.94,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(31);
   pt->SetTextFont(53);
   pt->SetTextSize(37);
   AText = pt->AddText("Simulation");
   pt->Draw();
   cv0.539176322022->Modified();
   cv0.539176322022->cd();
   cv0.539176322022->SetSelected(cv0.539176322022);
}
