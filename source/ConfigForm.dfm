object ConfigsForm: TConfigsForm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1042#1080#1073#1088#1086#1076#1080#1072#1075#1085#1086#1089#1090#1080#1082#1072' '#1043#1058#1044
  ClientHeight = 348
  ClientWidth = 494
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 21
  object Label1: TLabel
    Left = 8
    Top = 48
    Width = 235
    Height = 31
    Alignment = taCenter
    AutoSize = False
    Caption = #1050#1086#1085#1092#1080#1075#1091#1088#1072#1094#1080#1103
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Times New Roman'
    Font.Style = [fsUnderline]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 251
    Top = 48
    Width = 235
    Height = 31
    Alignment = taCenter
    AutoSize = False
    Caption = #1058#1080#1087' '#1080#1089#1087#1099#1090#1072#1085#1080#1103
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Times New Roman'
    Font.Style = [fsUnderline]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 6
    Top = 11
    Width = 126
    Height = 21
    Caption = #1053#1086#1084#1077#1088' '#1080#1079#1076#1077#1083#1080#1103':'
  end
  object Label4: TLabel
    Left = 295
    Top = 8
    Width = 191
    Height = 34
    Alignment = taCenter
    AutoSize = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object EdtNumber: TEdit
    Left = 138
    Top = 8
    Width = 348
    Height = 29
    NumbersOnly = True
    TabOrder = 0
    OnExit = EdtNumberExit
  end
  object BtnExit: TButton
    Left = 8
    Top = 297
    Width = 235
    Height = 43
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 3
    OnClick = BtnExitClick
  end
  object BtnStart: TButton
    Left = 249
    Top = 299
    Width = 237
    Height = 43
    Caption = #1055#1091#1089#1082
    TabOrder = 4
    OnClick = BtnStartClick
  end
  object BtnChOptions: TButton
    Left = 249
    Top = 186
    Width = 237
    Height = 43
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1040#1087#1087#1072#1088#1072#1090#1091#1088#1099
    TabOrder = 1
  end
  object BtnStartOptions: TButton
    Left = 249
    Top = 242
    Width = 237
    Height = 43
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1072' '#1047#1072#1087#1091#1089#1082#1072
    TabOrder = 2
  end
  object ListConfig: TStringGrid
    Left = 8
    Top = 85
    Width = 235
    Height = 200
    ColCount = 1
    FixedCols = 0
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSelect]
    ScrollBars = ssVertical
    TabOrder = 5
    OnSelectCell = ListConfigSelectCell
    ColWidths = (
      296)
  end
  object ListTypes: TStringGrid
    Left = 251
    Top = 85
    Width = 235
    Height = 84
    ColCount = 1
    FixedCols = 0
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSelect]
    ScrollBars = ssVertical
    TabOrder = 6
    OnSelectCell = ListTypesSelectCell
    ColWidths = (
      296)
  end
end
