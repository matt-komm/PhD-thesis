void unfoldedParton_mu_pt()
{
//=========Macro generated from canvas: cv0.36984223845/
//=========  (Wed Aug 23 03:37:20 2017) by ROOT version6.02/05
   TCanvas *cv0.36984223845 = new TCanvas("cv0.36984223845", "",0,0,800,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cv0.36984223845->SetHighLightColor(2);
   cv0.36984223845->Range(-64.55697,-4.577024,315.1899,-1.280864);
   cv0.36984223845->SetFillColor(0);
   cv0.36984223845->SetFillStyle(4000);
   cv0.36984223845->SetBorderMode(0);
   cv0.36984223845->SetBorderSize(2);
   cv0.36984223845->SetLogy();
   cv0.36984223845->SetTickx(1);
   cv0.36984223845->SetTicky(1);
   cv0.36984223845->SetLeftMargin(0.17);
   cv0.36984223845->SetRightMargin(0.04);
   cv0.36984223845->SetTopMargin(0.08);
   cv0.36984223845->SetBottomMargin(0.165);
   cv0.36984223845->SetFrameFillStyle(0);
   cv0.36984223845->SetFrameBorderMode(0);
   cv0.36984223845->SetFrameFillStyle(0);
   cv0.36984223845->SetFrameBorderMode(0);
   
   TH2F *axis_unfoldedHist_responseParton0.9284324981480.44341449661 = new TH2F("axis_unfoldedHist_responseParton0.9284324981480.44341449661","",50,0,300,50,9.264929e-05,0.02853927);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->SetMarkerStyle(20);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetTitle("top quark p#lower[0.3]{#scale[0.7]{T}} (GeV)");
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetNdivisions(1005);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetLabelFont(43);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetLabelOffset(0.015);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetLabelSize(36.92308);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetTitleSize(40.38462);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetTickLength(0.025);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetTitleOffset(1.5);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetXaxis()->SetTitleFont(43);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetTitle("1/#sigma#kern[-0.4]{ }#times#kern[-0.4]{ }d#kern[-0.6]{ }#sigma/#kern[-0.6]{ }d#kern[-0.6]{ }p#lower[0.3]{#scale[0.7]{T}} (GeV#lower[-0.5]{#scale[0.7]{-1}})");
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetNdivisions(506);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetLabelFont(43);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetLabelOffset(0.0077);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetLabelSize(36.92308);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetTitleSize(40.38462);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetTickLength(0.02);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetTitleOffset(1.55);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetYaxis()->SetTitleFont(43);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetZaxis()->SetLabelFont(43);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetZaxis()->SetLabelOffset(0.0077);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetZaxis()->SetLabelSize(36.92308);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetZaxis()->SetTitleSize(40.38462);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetZaxis()->SetTitleOffset(1.55);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->GetZaxis()->SetTitleFont(43);
   axis_unfoldedHist_responseParton0.9284324981480.44341449661->Draw("AXIS");
   Double_t xAxis3[7] = {0, 50, 90, 125, 180, 240, 300}; 
   
   TH1D *genHist_responseParton0.3625898866662 = new TH1D("genHist_responseParton0.3625898866662","",6, xAxis3);
   genHist_responseParton0.3625898866662->SetBinContent(1,0.008230339);
   genHist_responseParton0.3625898866662->SetBinContent(2,0.007874909);
   genHist_responseParton0.3625898866662->SetBinContent(3,0.00396612);
   genHist_responseParton0.3625898866662->SetBinContent(4,0.001651554);
   genHist_responseParton0.3625898866662->SetBinContent(5,0.0005440437);
   genHist_responseParton0.3625898866662->SetBinContent(6,0.0001865728);
   genHist_responseParton0.3625898866662->SetBinContent(7,0.0005863331);
   genHist_responseParton0.3625898866662->SetBinError(1,6.262856e-07);
   genHist_responseParton0.3625898866662->SetBinError(2,1.101813e-06);
   genHist_responseParton0.3625898866662->SetBinError(3,9.055382e-07);
   genHist_responseParton0.3625898866662->SetBinError(4,4.663022e-07);
   genHist_responseParton0.3625898866662->SetBinError(5,2.533976e-07);
   genHist_responseParton0.3625898866662->SetBinError(6,1.456178e-07);
   genHist_responseParton0.3625898866662->SetBinError(7,6.850054e-06);
   genHist_responseParton0.3625898866662->SetEntries(2.043855e+08);
   genHist_responseParton0.3625898866662->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6699ff");
   genHist_responseParton0.3625898866662->SetLineColor(ci);
   genHist_responseParton0.3625898866662->SetLineWidth(3);
   genHist_responseParton0.3625898866662->GetXaxis()->SetRange(1,6);
   genHist_responseParton0.3625898866662->GetXaxis()->SetLabelFont(42);
   genHist_responseParton0.3625898866662->GetXaxis()->SetLabelSize(0.035);
   genHist_responseParton0.3625898866662->GetXaxis()->SetTitleSize(0.035);
   genHist_responseParton0.3625898866662->GetXaxis()->SetTitleFont(42);
   genHist_responseParton0.3625898866662->GetYaxis()->SetNdivisions(506);
   genHist_responseParton0.3625898866662->GetYaxis()->SetLabelFont(43);
   genHist_responseParton0.3625898866662->GetYaxis()->SetLabelOffset(0.0077);
   genHist_responseParton0.3625898866662->GetYaxis()->SetLabelSize(36.92308);
   genHist_responseParton0.3625898866662->GetYaxis()->SetTitleSize(40.38462);
   genHist_responseParton0.3625898866662->GetYaxis()->SetTitleOffset(1.55);
   genHist_responseParton0.3625898866662->GetYaxis()->SetTitleFont(43);
   genHist_responseParton0.3625898866662->GetZaxis()->SetLabelFont(43);
   genHist_responseParton0.3625898866662->GetZaxis()->SetLabelOffset(0.0077);
   genHist_responseParton0.3625898866662->GetZaxis()->SetLabelSize(36.92308);
   genHist_responseParton0.3625898866662->GetZaxis()->SetTitleSize(40.38462);
   genHist_responseParton0.3625898866662->GetZaxis()->SetTitleOffset(1.55);
   genHist_responseParton0.3625898866662->GetZaxis()->SetTitleFont(43);
   genHist_responseParton0.3625898866662->Draw("HISTSame");
   TMarker *marker = new TMarker(25,0.00811855,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   TLine *line = new TLine(25,0.007641238,25,0.008595862);
   line->Draw();
   line = new TLine(20,0.008595862,30,0.008595862);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(20,0.007641238,30,0.007641238);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(70,0.008195786,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(70,0.007819309,70,0.008572264);
   line->Draw();
   line = new TLine(65,0.008572264,75,0.008572264);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(65,0.007819309,75,0.007819309);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(107.5,0.00372602,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(107.5,0.003389137,107.5,0.004062903);
   line->Draw();
   line = new TLine(102.5,0.004062903,112.5,0.004062903);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(102.5,0.003389137,112.5,0.003389137);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(152.5,0.00158958,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(152.5,0.001459156,152.5,0.001720004);
   line->Draw();
   line = new TLine(147.5,0.001720004,157.5,0.001720004);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(147.5,0.001459156,157.5,0.001459156);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(210,0.0005810658,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(210,0.000524242,210,0.0006378896);
   line->Draw();
   line = new TLine(205,0.0006378896,215,0.0006378896);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(205,0.000524242,215,0.000524242);
   line->SetLineWidth(2);
   line->Draw();
   marker = new TMarker(270,0.0002256584,20);
   marker->SetMarkerStyle(20);
   marker->SetMarkerSize(1.25);
   marker->Draw();
   line = new TLine(270,0.0001511302,270,0.0003001865);
   line->Draw();
   line = new TLine(265,0.0003001865,275,0.0003001865);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(265,0.0001511302,275,0.0001511302);
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
   TLegendEntry *entry=leg->AddEntry("genHist_responseParton0.362589886666","Powheg#kern[-0.5]{ }+#kern[-0.5]{ }Pythia8","L");

   ci = TColor::GetColor("#6699ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("unfoldedHist_responseParton0.928432498148","Unfolded pseudo-data","PE");
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
   cv0.36984223845->Modified();
   cv0.36984223845->cd();
   cv0.36984223845->SetSelected(cv0.36984223845);
}
